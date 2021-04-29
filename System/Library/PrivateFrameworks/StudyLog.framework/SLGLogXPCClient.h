/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SLGLogClientProtocol.h>
#import <libobjc.A.dylib/SLGLogClient.h>

@protocol OS_dispatch_queue, SLGLogClientProtocolDelegate;
@class NSXPCConnection, NSObject, NSString;

@interface SLGLogXPCClient : NSObject <SLGLogClientProtocol, SLGLogClient> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	id<SLGLogClientProtocolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLGLogClientProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<SLGLogClientProtocolDelegate>)delegate;
-(void)setDelegate:(id<SLGLogClientProtocolDelegate>)arg1 ;
-(void)queryServer:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_handshake;
-(void)_connectWithCompletion:(/*^block*/id)arg1 ;
-(void)didReceiveInitialLogMessageFromDomain:(id)arg1 ;
-(void)serverDidReset;
@end

