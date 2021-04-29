//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_nw_connection, SDRemoteDataSource;

__attribute__((visibility("hidden")))
@interface SystemDiagnosticRemote : NSObject
{
    unsigned int _remainingBytes;	// 8 = 0x8
    int _outFD;	// 12 = 0xc
    NSObject<OS_dispatch_group> *_remoteGroup;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_remoteFileTransferGroup;	// 24 = 0x18
    NSString *_hostOutputDirectoy;	// 32 = 0x20
    id <SDRemoteDataSource> _xpcDataSource;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_sysdiagnoseQueue;	// 48 = 0x30
    NSObject<OS_nw_connection> *_eosConnection;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0000000100017c00
- (void).cxx_destruct;	// IMP=0x0000000100017d80
@property int outFD; // @synthesize outFD=_outFD;
@property unsigned int remainingBytes; // @synthesize remainingBytes=_remainingBytes;
@property(retain) NSObject<OS_nw_connection> *eosConnection; // @synthesize eosConnection=_eosConnection;
@property(retain) NSObject<OS_dispatch_queue> *sysdiagnoseQueue; // @synthesize sysdiagnoseQueue=_sysdiagnoseQueue;
@property(nonatomic) __weak id <SDRemoteDataSource> xpcDataSource; // @synthesize xpcDataSource=_xpcDataSource;
@property(retain, nonatomic) NSString *hostOutputDirectoy; // @synthesize hostOutputDirectoy=_hostOutputDirectoy;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *remoteFileTransferGroup; // @synthesize remoteFileTransferGroup=_remoteFileTransferGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *remoteGroup; // @synthesize remoteGroup=_remoteGroup;
- (id)init;	// IMP=0x0000000100017c6c

@end

