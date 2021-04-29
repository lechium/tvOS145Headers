/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface CRBundleManager : NSObject {

	NSMutableSet* _bundles;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedInstance;
+(id)bundleDirectoryName;
+(id)bundleDirectoryPath;
+(Class)bundleClass;
-(id)init;
-(void)_getBundlesOnCurrentQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)getBundlesWithCompletion:(/*^block*/id)arg1 ;
@end

