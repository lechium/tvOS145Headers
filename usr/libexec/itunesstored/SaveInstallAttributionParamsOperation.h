//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class InstallAttributionParams, NSString;

@interface SaveInstallAttributionParamsOperation : ISOperation
{
    InstallAttributionParams *_params;	// 96 = 0x60
    NSString *_originatingBundleId;	// 104 = 0x68
    _Bool _overrideCampaignLimit;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000010019f9f0
- (void)run;	// IMP=0x000000010019ede0
- (id)initWithRequest:(id)arg1;	// IMP=0x000000010019eb14

@end

