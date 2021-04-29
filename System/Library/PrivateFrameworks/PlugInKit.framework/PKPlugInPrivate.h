/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSDate, NSXPCConnection, NSDictionary, NSArray;


@protocol PKPlugInPrivate <PKPlugIn>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDate * timestamp; 
@property (readonly) NSXPCConnection * pluginConnection; 
@property (retain) NSDictionary * extensionState; 
@property (retain) NSDictionary * environment; 
@property (copy) NSArray * preferredLanguages; 
@required
-(NSArray *)preferredLanguages;
-(NSDictionary *)environment;
-(void)setPreferredLanguages:(id)arg1;
-(void)setEnvironment:(id)arg1;
-(NSDate *)timestamp;
-(NSUUID *)uuid;
-(void)beginUsingRequest:(id)arg1 withSubsystemOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)beginUsingRequest:(id)arg1 withSubsystemOptions:(id)arg2 error:(id*)arg3;
-(NSXPCConnection *)pluginConnection;
-(void)endUsingRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)endUsingRequest:(id)arg1 error:(id*)arg2;
-(BOOL)beginUsingRequest:(id)arg1 error:(id*)arg2;
-(void)beginUsingRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(NSDictionary *)extensionState;
-(void)setExtensionState:(id)arg1;

@end
