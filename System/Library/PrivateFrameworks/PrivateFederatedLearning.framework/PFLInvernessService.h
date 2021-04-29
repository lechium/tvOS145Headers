/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PFLNetworkProvider.h>

@class CKContainer, NSString;

@interface PFLInvernessService : NSObject <PFLNetworkProvider> {

	CKContainer* _container;

}

@property (nonatomic,retain) CKContainer * container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(CKContainer *)container;
-(id)_teamIdentifier;
-(id)_appBundleIdentifier;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)_taskConfigurationsFromPFLTasks:(id)arg1 ;
-(void)fetchTasks:(/*^block*/id)arg1 ;
-(void)fetchModelForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)uploadDeviceResult:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

