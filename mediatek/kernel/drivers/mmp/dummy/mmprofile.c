/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2008
 *
 *  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 *  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 *  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
 *  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 *  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 *  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 *  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 *  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
 *  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
 *  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *
 *  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
 *  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 *  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 *  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
 *  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
 *
 *  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
 *  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
 *  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
 *  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
 *  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
 *
 *****************************************************************************/
#include <linux/miscdevice.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/cdev.h>
#include <asm/io.h>

#include <linux/autoconf.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/device.h>
#include <linux/platform_device.h>

#include <asm/uaccess.h>
#include <asm/mach-types.h>

#define MMPROFILE_INTERNAL
#include <linux/mmprofile_internal.h>
//#pragma GCC optimize ("O0")
#define MMP_DEVNAME "mmp"

// Exposed APIs begin
MMP_Event MMProfileRegisterEvent(MMP_Event parent, const char* name)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileRegisterEvent);

MMP_Event MMProfileFindEvent(MMP_Event parent, const char* name)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileFindEvent);

void MMProfileEnableEvent(MMP_Event event, int enable)
{
}
EXPORT_SYMBOL(MMProfileEnableEvent);

void MMProfileEnableEventRecursive(MMP_Event event, int enable)
{
}
EXPORT_SYMBOL(MMProfileEnableEventRecursive);

int  MMProfileQueryEnable(MMP_Event event)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileQueryEnable);

void MMProfileLogEx(MMP_Event event, MMP_LogType type, unsigned int data1, unsigned int data2)
{
}
EXPORT_SYMBOL(MMProfileLogEx);

void MMProfileLog(MMP_Event event, MMP_LogType type)
{
}
EXPORT_SYMBOL(MMProfileLog);

int MMProfileLogMeta(MMP_Event event, MMP_LogType type, MMP_MetaData_t* pMetaData)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileLogMeta);

int MMProfileLogMetaStructure(MMP_Event event, MMP_LogType type, MMP_MetaDataStructure_t* pMetaData)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileLogMetaStructure);

int MMProfileLogMetaStringEx(MMP_Event event, MMP_LogType type, unsigned int data1, unsigned int data2, const char* str)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileLogMetaStringEx);

int MMProfileLogMetaString(MMP_Event event, MMP_LogType type, const char* str)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileLogMetaString);

int MMProfileLogMetaBitmap(MMP_Event event, MMP_LogType type, MMP_MetaDataBitmap_t* pMetaData)
{
    return 0;
}
EXPORT_SYMBOL(MMProfileLogMetaBitmap);

// Exposed APIs end

// Driver specific begin
static dev_t mmprofile_devno;
static struct cdev *mmprofile_cdev;
static struct class *mmprofile_class = NULL;

static int mmprofile_release(struct inode *inode, struct file *file)
{
	return 0;
}

static int mmprofile_open(struct inode *inode, struct file *file)
{ 
	return 0;
}

static ssize_t mmprofile_read(struct file *file, char __user *data, size_t len, loff_t *ppos)
{
	return 0;
}

static ssize_t mmprofile_write(struct file *file, const char __user *data, size_t len, loff_t *ppos)
{
	return 0;
}

static long mmprofile_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
{
	return 0;
}

static int mmprofile_mmap(struct file *file, struct vm_area_struct * vma)
{
    return -EINVAL;
}

struct file_operations mmprofile_fops = {
	.owner   = THIS_MODULE,
	.unlocked_ioctl   = mmprofile_ioctl,
	.open    = mmprofile_open,    
	.release = mmprofile_release,
	.read    = mmprofile_read,
	.write   = mmprofile_write,
	.mmap    = mmprofile_mmap,
};


static int mmprofile_probe(struct platform_device *pdev)
{
	struct class_device *class_dev = 0;
	int ret = alloc_chrdev_region(&mmprofile_devno, 0, 1, MMP_DEVNAME);

	mmprofile_cdev = cdev_alloc();
	mmprofile_cdev->owner = THIS_MODULE;
	mmprofile_cdev->ops = &mmprofile_fops;
	ret = cdev_add(mmprofile_cdev, mmprofile_devno, 1);
	mmprofile_class = class_create(THIS_MODULE, MMP_DEVNAME);
	class_dev = (struct class_device *)device_create(mmprofile_class, NULL, mmprofile_devno, NULL, MMP_DEVNAME);

	return 0;
}

static int mmprofile_remove(struct platform_device *pdev)
{
	return 0;
}

static struct platform_driver mmprofile_driver = {
	.probe  = mmprofile_probe,
	.remove = mmprofile_remove,
	.driver = { .name = MMP_DEVNAME }
};

static struct platform_device mmprofile_device = {
	.name = MMP_DEVNAME,
	.id   = 0,
};

static int __init mmprofile_init(void)
{
	if (platform_device_register(&mmprofile_device)) 
	{
		return -ENODEV;
	}
	if (platform_driver_register(&mmprofile_driver))
	{
		platform_device_unregister(&mmprofile_device);
		return -ENODEV;
	}
	return 0;
}

static void __exit mmprofile_exit(void)
{
	device_destroy(mmprofile_class, mmprofile_devno);    
	class_destroy(mmprofile_class);
	cdev_del(mmprofile_cdev);
	unregister_chrdev_region(mmprofile_devno, 1);

	platform_driver_unregister(&mmprofile_driver);
	platform_device_unregister(&mmprofile_device);
}
// Driver specific end

module_init(mmprofile_init);
module_exit(mmprofile_exit);
MODULE_AUTHOR("Tianshu Qiu <tianshu.qiu@mediatek.com>");
MODULE_DESCRIPTION("MMProfile Driver");
MODULE_LICENSE("GPL");
