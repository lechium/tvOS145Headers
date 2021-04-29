/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTransport.h>
#import <libobjc.A.dylib/CATIDSServiceConnectionDelegate.h>

@class CATIDSServiceConnection, NSMutableArray;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {

	CATIDSServiceConnection* mConnection;
	NSMutableArray* mReceiveQueue;
	BOOL mIsActive;
	BOOL mDidDelegateInvalidation;

}
-(id)initWithConnection:(id)arg1 ;
-(void)suspendConnection;
-(void)resumeConnection;
-(void)invalidateConnection;
-(void)connectionClosed:(id)arg1 ;
-(void)serviceReceiveQueue;
-(void)tryReportingInvalidation;
-(void)connection:(id)arg1 receivedData:(id)arg2 ;
-(id)operationToSendMessage:(id)arg1 ;
@end

