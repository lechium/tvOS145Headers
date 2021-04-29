/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface DRSClientConnectionState : NSObject {

	BOOL _hasAdminEntitlement;
	int _pid;

}

@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BOOL hasAdminEntitlement;              //@synthesize hasAdminEntitlement=_hasAdminEntitlement - In the implementation block
-(void)dealloc;
-(int)pid;
-(BOOL)hasAdminEntitlement;
-(id)initWithConnection:(id)arg1 service:(id)arg2 ;
@end

