/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CPBitmapStore;

@interface UIStatusBarCache : NSObject {

	CPBitmapStore* _store;
	BOOL _writeable;

}

@property (getter=isWriteable,nonatomic,readonly) BOOL writeable;              //@synthesize writeable=_writeable - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3 ;
-(void)removeImagesInGroup:(id)arg1 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3 ;
-(BOOL)isWriteable;
@end

