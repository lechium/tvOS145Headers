/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CATNetworkPowerPrimitives, CATIDSServiceConnectionInvitationOutboxDelegate;
@class NSMutableDictionary, NSMutableArray;

@interface CATIDSServiceConnectionInvitationOutbox : NSObject {

	id<CATNetworkPowerPrimitives> mNetworkPowerPrimitives;
	NSMutableDictionary* mInFlightInvitationRequestsByInvitationID;
	NSMutableArray* mInvitationRequestQueue;
	BOOL mIsActive;
	id<CATIDSServiceConnectionInvitationOutboxDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATIDSServiceConnectionInvitationOutboxDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CATIDSServiceConnectionInvitationOutboxDelegate>)delegate;
-(void)setDelegate:(id<CATIDSServiceConnectionInvitationOutboxDelegate>)arg1 ;
-(void)resume;
-(void)suspend;
-(id)initWithNetworkPowerPrimitives:(id)arg1 ;
-(void)beginInvitationWithIdentifier:(id)arg1 appleID:(id)arg2 userInfo:(id)arg3 ;
-(void)cancelInvitationWithIdentifier:(id)arg1 ;
-(void)cancelAllInvitations;
-(void)receiveAcceptForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 ;
-(void)receiveRejectForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 error:(id)arg4 ;
-(void)serviceInvitationQueue;
@end

