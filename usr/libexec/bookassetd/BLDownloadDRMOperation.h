//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class BLBookInstallInfo, NSError;

__attribute__((visibility("hidden")))
@interface BLDownloadDRMOperation : NSOperation
{
    _Bool _success;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    BLBookInstallInfo *_installInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100053a80
@property(retain, nonatomic) BLBookInstallInfo *installInfo; // @synthesize installInfo=_installInfo;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (_Bool)_decryptAsset:(id *)arg1;	// IMP=0x00000001000536b4
- (void)main;	// IMP=0x000000010005365c
- (id)initWithInstallInfo:(id)arg1;	// IMP=0x00000001000535dc

@end

