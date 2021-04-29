//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, SSAuthenticationContext;

@interface GetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *_authContext;	// 96 = 0x60
    NSArray *_enabledDownloadKinds;	// 104 = 0x68
}

- (void)run;	// IMP=0x000000010011e150
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSArray *enabledDownloadKinds;
- (void)dealloc;	// IMP=0x000000010011dfdc

@end

