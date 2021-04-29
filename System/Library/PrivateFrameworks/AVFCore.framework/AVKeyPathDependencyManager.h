/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVKeyPathDependencyRegistration.h>

@class AVWeakReference, AVWeakObservableCallbackCancellationHelper, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {

	AVWeakReference* _weakReferenceToDependencyHost;
	AVWeakObservableCallbackCancellationHelper* _callbackCancellationHelper;
	NSMutableSet* _keyPathDependencies;

}
-(void)dealloc;
-(id)initWithDependencyHost:(id)arg1 ;
-(void)dependencyHostIsFullyInitialized;
-(void)addCallbackToCancel:(id)arg1 ;
-(void)cancelAllCallbacks;
-(void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2 ;
@end

