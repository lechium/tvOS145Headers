/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BaseBoardUI/BaseBoardUI-Structs.h>
@class BSAtomicSignal, NSThread, UIImage;

@interface BSUIMappedImageCacheFuture : NSObject {

	os_unfair_lock_s _lock;
	BSAtomicSignal* _submitted;
	NSThread* _submissionThread;
	/*^block*/id _lock_workBlock;
	BOOL _lock_workCompletionWasCalled;
	UIImage* _postlock_cachedImage;

}
-(id)init;
-(void)dealloc;
@end
