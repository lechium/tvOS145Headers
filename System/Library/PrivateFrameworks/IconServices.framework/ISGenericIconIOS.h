/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISIcon.h>

@class ISImageCache;

@interface ISGenericIconIOS : ISIcon {

	ISImageCache* _imageCache;

}

@property (retain) ISImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(id)_init;
-(ISImageCache *)imageCache;
-(void)setImageCache:(ISImageCache *)arg1 ;
-(CGImageRef)CGImageForImageDescriptor:(id)arg1 ;
-(void)getCGImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareImagesForImageDescriptors:(id)arg1 ;
-(id)imageForImageDescriptor:(id)arg1 ;
-(void)getImageForImageDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)prepareImageForDescriptor:(id)arg1 ;
-(id)_prepareImageForImageDescriptor:(id)arg1 ;
@end
