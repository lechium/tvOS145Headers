/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CDPContext;

@interface CDPDRecoveryFlowContext : NSObject {

	BOOL _hasPeersForRemoteApproval;
	CDPContext* _context;

}

@property (nonatomic,retain) CDPContext * context;                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasPeersForRemoteApproval;              //@synthesize hasPeersForRemoteApproval=_hasPeersForRemoteApproval - In the implementation block
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(BOOL)hasPeersForRemoteApproval;
-(void)setHasPeersForRemoteApproval:(BOOL)arg1 ;
@end

