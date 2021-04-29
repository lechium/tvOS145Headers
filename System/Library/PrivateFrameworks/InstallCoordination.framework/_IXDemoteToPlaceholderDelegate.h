/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IXAppInstallCoordinatorObserver.h>

@class NSString, IXDemotingAppInstallCoordinator;

@interface _IXDemoteToPlaceholderDelegate : NSObject <IXAppInstallCoordinatorObserver> {

	NSString* _bundleID;
	/*^block*/id _completion;
	IXDemotingAppInstallCoordinator* _coordinator;

}

@property (nonatomic,copy) NSString * bundleID;                                          //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) IXDemotingAppInstallCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completion;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(IXDemotingAppInstallCoordinator *)coordinator;
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorDidCompleteSuccessfully:(id)arg1 ;
-(void)setCoordinator:(IXDemotingAppInstallCoordinator *)arg1 ;
@end

