//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface MCInteractionClient : NSObject
{
    NSString *_defaultStatus;	// 8 = 0x8
    NSString *_lastStatus;	// 16 = 0x10
    NSXPCConnection *_xpcConnection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000198dc
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSString *defaultStatus;
- (_Bool)requestCurrentPasscodeOutPasscode:(id *)arg1;	// IMP=0x00000001000194bc
- (_Bool)didBeginInstallingNextProfileData:(id)arg1;	// IMP=0x00000001000192fc
- (_Bool)didUpdateStatus:(id)arg1;	// IMP=0x0000000100019110
- (_Bool)didFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x0000000100018e54
- (_Bool)showUserWarnings:(id)arg1 outResult:(_Bool *)arg2;	// IMP=0x0000000100018a00
- (void)_receivedUserInput:(id)arg1 preflight:(_Bool)arg2 payloadIndex:(unsigned long long)arg3 delegate:(id)arg4 semaphore:(id)arg5 error:(id)arg6 outResponses:(id)arg7;	// IMP=0x00000001000185a0
- (_Bool)requestMAIDSignIn:(id)arg1 personaID:(id)arg2 outError:(id *)arg3 isCancelled:(_Bool *)arg4;	// IMP=0x0000000100018020
- (_Bool)requestUserInput:(id)arg1 delegate:(id)arg2 outResult:(id *)arg3;	// IMP=0x0000000100017b88
- (id)initWithXPCClientConnection:(id)arg1;	// IMP=0x0000000100017b14

@end

