/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MobileInstallation/MobileInstallation-Structs.h>
@class NSXPCConnection;

@interface MIHelperServiceFrameworkClient : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)_invalidateObject;
-(id)_sharedConnection;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)purgeInstallCoordinationPromiseStagingDirectoryForUUID:(id)arg1 keepStagingDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(id)createWrappedAppForInstalledBundleIdentifier:(id)arg1 inTargetDirectory:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(SCD_Struct_MI1)arg4 error:(id*)arg5 ;
-(id)updateWrappedAppAt:(id)arg1 forInstalledBundleIdentifier:(id)arg2 installationInfo:(id)arg3 onBehalfOf:(SCD_Struct_MI1)arg4 error:(id*)arg5 ;
-(BOOL)removeWrappedAppWithBundleID:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
@end

