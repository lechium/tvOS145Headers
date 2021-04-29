//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class FairPlayDecryptSession, NSData, NSString;

@interface FairPlayDecryptFileOperation : ISOperation
{
    NSData *_dpInfo;	// 96 = 0x60
    double _lastSnapshotTime;	// 104 = 0x68
    NSString *_path;	// 112 = 0x70
    FairPlayDecryptSession *_fairplayDecryptSession;	// 120 = 0x78
}

- (void)_updateProgressWithByteCount:(long long)arg1;	// IMP=0x0000000100088d0c
- (void)_initializeProgressWithFileHandle:(id)arg1;	// IMP=0x0000000100088c60
- (_Bool)_decryptWithSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000886b0
- (void)run;	// IMP=0x000000010008800c
- (void)dealloc;	// IMP=0x0000000100087fac
- (id)initWithPath:(id)arg1 dpInfo:(id)arg2;	// IMP=0x0000000100087edc
- (id)init;	// IMP=0x0000000100087ec8

@end

