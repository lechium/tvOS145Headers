/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDServerConfiguration, NSObject;

@interface CKDGlobalConfigurationOperation : CKDOperation {

	CKDServerConfiguration* _configuration;
	NSObject*<OS_dispatch_group> _configurationFetchedGroup;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> configurationFetchedGroup;              //@synthesize configurationFetchedGroup=_configurationFetchedGroup - In the implementation block
-(CKDServerConfiguration *)configuration;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(void)main;
-(id)activityCreate;
-(BOOL)shouldCheckAppVersion;
-(void)setConfigurationFetchedGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)configurationFetchedGroup;
@end

