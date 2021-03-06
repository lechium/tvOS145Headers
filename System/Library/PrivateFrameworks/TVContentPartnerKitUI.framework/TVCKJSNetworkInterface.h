/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKJSObject.h>
#import <TVContentPartnerKitUI/TVCKJSNetworkInterface.h>

@protocol TVCKJSNetworkInterface <JSExport>
@required
-(void)cancelRequest:(id)arg1;
-(id)makeRequest:(id)arg1 :(id)arg2;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2;
-(void)invalidateConfiguration;

@end


@class NSXPCConnection;

@interface TVCKJSNetworkInterface : IKJSObject <TVCKJSNetworkInterface> {

	NSXPCConnection* _connection;
	BOOL _suppressServerConfigNotifications;

}

@property (assign) BOOL suppressServerConfigNotifications;              //@synthesize suppressServerConfigNotifications=_suppressServerConfigNotifications - In the implementation block
-(void)dealloc;
-(void)cancelRequest:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(void)_handleAppLibChange:(id)arg1 ;
-(void)_handleServerConfigChange:(id)arg1 ;
-(long long)_requestOptionsFromJSOptions:(id)arg1 ;
-(void)_enqueueNetworkOp:(id)arg1 withJSCallback:(id)arg2 ;
-(void)setSuppressServerConfigNotifications:(BOOL)arg1 ;
-(id)makeRequest:(id)arg1 :(id)arg2 ;
-(void)fetchConfiguration:(BOOL)arg1 :(id)arg2 ;
-(void)invalidateConfiguration;
-(BOOL)suppressServerConfigNotifications;
@end

