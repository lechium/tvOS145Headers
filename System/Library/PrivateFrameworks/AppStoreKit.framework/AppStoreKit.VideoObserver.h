/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AppStoreKit.VideoObserver : NSObject {

	 delegate;
	 playerItemObserversAdded;
	 playerObserversAdded;
	 timeBoundaryObserver;

}
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)videoDidPlayToEnd;
-(void)videoPlaybackDidStall;
-(void)playbackErrorOccurredWithNotification:(id)arg1 ;
@end

