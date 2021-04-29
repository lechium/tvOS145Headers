/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <Foundation/NSBlockOperation.h>

@class NSProgress;

@interface PLLibraryServicesOperation : NSBlockOperation {

	/*^block*/id _cancellationBlock;
	os_unfair_lock_s _cancellationLock;
	BOOL _cancellationBlockCalled;
	long long _requiredState;
	NSProgress* _progress;
	long long _progressPercentOfTotal;

}

@property (assign,nonatomic) long long requiredState;                       //@synthesize requiredState=_requiredState - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                         //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) long long progressPercentOfTotal;              //@synthesize progressPercentOfTotal=_progressPercentOfTotal - In the implementation block
@property (nonatomic,copy) id cancellationBlock;                            //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
+(BOOL)shouldSuppressLogging;
+(void)setShouldSuppressLogging:(BOOL)arg1 ;
+(id)operationWithName:(id)arg1 requiredState:(long long)arg2 parentProgress:(id)arg3 execution:(/*^block*/id)arg4 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(NSProgress *)progress;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setCancellationBlock:(id)arg1 ;
-(id)cancellationBlock;
-(long long)requiredState;
-(void)setExecutionBlockFromOperationBlock:(/*^block*/id)arg1 ;
-(void)_safeRemoveCancellationObserver;
-(void)setRequiredState:(long long)arg1 ;
-(long long)progressPercentOfTotal;
-(void)setProgressPercentOfTotal:(long long)arg1 ;
@end

