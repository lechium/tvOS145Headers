/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/PBSBulletinServiceDelegate.h>
#import <libobjc.A.dylib/PBSBulletinServiceInterface.h>

@protocol PBSBulletinServiceDelegate, PBSBulletinServiceInterface;
@class NSString;

@interface HMDBulletinBoardServiceWrapper : NSObject <PBSBulletinServiceDelegate, PBSBulletinServiceInterface> {

	hmf_unfair_data_lock_s _lock;
	id<PBSBulletinServiceDelegate> _bulletinDelegate;
	id<PBSBulletinServiceInterface> _bulletinService;

}

@property (assign,nonatomic,__weak) id<PBSBulletinServiceDelegate> bulletinDelegate;              //@synthesize bulletinDelegate=_bulletinDelegate - In the implementation block
@property (nonatomic,retain) id<PBSBulletinServiceInterface> bulletinService;                     //@synthesize bulletinService=_bulletinService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)setInteractionDelegate:(id)arg1 ;
-(void)dismissBulletin:(id)arg1 ;
-(void)presentBulletin:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3 ;
-(id<PBSBulletinServiceInterface>)bulletinService;
-(void)setBulletinDelegate:(id<PBSBulletinServiceDelegate>)arg1 ;
-(id)updateBulletin:(id)arg1 withMessage:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)xpcUpdateBulletin:(id)arg1 withMessage:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id<PBSBulletinServiceDelegate>)bulletinDelegate;
-(void)setBulletinService:(id<PBSBulletinServiceInterface>)arg1 ;
@end

