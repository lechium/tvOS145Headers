/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/TRIFactorProviding.h>

@protocol TRIPaths, OS_dispatch_queue;
@class TRIDefaultFactorProvider, TRILogger, _PASLock, NSObject, NSString, TRITrackingId;

@interface TRIClient : NSObject <TRIFactorProviding> {

	id<TRIPaths> _paths;
	TRIDefaultFactorProvider* _defaultFactorProvider;
	int _projectId;
	TRILogger* _trialDevLogger;
	_PASLock* _lock;
	atomic_flag _isLazyInitComplete;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	TRILogger* _logger;

}

@property (nonatomic,readonly) int deploymentID; 
@property (nonatomic,readonly) NSString * experimentID; 
@property (nonatomic,readonly) NSString * treatmentID; 
@property (nonatomic,readonly) TRITrackingId * trackingId; 
@property (nonatomic,readonly) TRILogger * logger;                      //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientWithIdentifier:(int)arg1 ;
+(BOOL)isPlatformBinary;
+(id)clientWithIdentifier:(int)arg1 unit:(int)arg2 ;
+(BOOL)requiresLogging;
+(BOOL)requiresTrialDataVaultAccess;
-(int)deploymentID;
-(NSString *)experimentID;
-(NSString *)treatmentID;
-(void)dealloc;
-(TRILogger *)logger;
-(id)factorLevelsWithNamespaceName:(id)arg1 ;
-(id)newTrackingId;
-(BOOL)trialIdentifiersWithNamespaceName:(id)arg1 experimentId:(id*)arg2 deploymentId:(int*)arg3 treatmentId:(id*)arg4 ;
-(BOOL)deregisterNamespaceName:(id)arg1 error:(id*)arg2 ;
-(id)addUpdateHandlerForNamespaceName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)downloadNamespaceWithName:(id)arg1 options:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)registerNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6 ;
-(id)newTrackingIdWithTreatmentRefresh:(BOOL)arg1 ;
-(id)levelForFactor:(id)arg1 withNamespaceName:(id)arg2 ;
-(TRITrackingId *)trackingId;
-(void)removeUpdateHandlerForToken:(id)arg1 ;
-(id)treatmentIdWithNamespaceName:(id)arg1 ;
-(id)addUpdateHandlerForNamespaceName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)experimentIdWithNamespaceName:(id)arg1 ;
-(id)rolloutIdWithNamespaceName:(id)arg1 ;
-(id)levelForFactor:(id)arg1 withNamespace:(unsigned)arg2 ;
-(id)factorLevelsWithNamespace:(unsigned)arg1 ;
-(BOOL)hasRegisteredNamespaceWithName:(id)arg1 ;
-(unsigned)compatibilityVersionWithNamespaceName:(id)arg1 ;
-(id)initWithClientIdentifier:(int)arg1 paths:(id)arg2 unit:(int)arg3 logger:(id)arg4 devLogger:(id)arg5 ;
-(void)_checkEntitlements;
-(void)_lazyInit;
-(void)_invalidateNamespacesWithGuardedData:(id)arg1 ;
-(void)_registerUpdateHandlerForNamespaceName:(id)arg1 notificationCallback:(id)arg2 ;
-(BOOL)hasDownloadedNamespaceWithName:(id)arg1 ;
-(id)initWithNonLoggingClientIdentifier:(int)arg1 paths:(id)arg2 ;
-(long long)_appContainerType:(id)arg1 ;
-(void)downloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 queue:(id)arg3 options:(id)arg4 progress:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)addUpdateHandlerForNamespaceId:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)addUpdateHandlerForNamespaceId:(unsigned)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)treatmentIdWithNamespace:(unsigned)arg1 ;
-(id)experimentIdWithNamespace:(unsigned)arg1 ;
-(void)downloadNamespaceWithName:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

