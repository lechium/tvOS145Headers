/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PXImageExtraction : NSObject {

	BOOL _cancelled;

}

@property (setter=_setCancelled:,getter=isCancelled) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(void)_setCancelled:(BOOL)arg1 ;
@end
