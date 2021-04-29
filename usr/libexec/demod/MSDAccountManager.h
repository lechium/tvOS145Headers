//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDAccountManager : NSObject
{
    NSString *_iTunesAltDSID;	// 8 = 0x8
    NSString *_iCloudAltDSID;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010003f764
- (void).cxx_destruct;	// IMP=0x0000000100045658
@property(retain) NSString *iCloudAltDSID; // @synthesize iCloudAltDSID=_iCloudAltDSID;
@property(retain) NSString *iTunesAltDSID; // @synthesize iTunesAltDSID=_iTunesAltDSID;
- (_Bool)whitelisted:(id)arg1;	// IMP=0x0000000100045214
- (id)authenticationFor:(id)arg1 password:(id)arg2 accountType:(id)arg3 serviceType:(long long)arg4 error:(id *)arg5;	// IMP=0x0000000100044acc
- (_Bool)disableFMIP:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100043f38
- (_Bool)signOutiCloudAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100043994
- (_Bool)signIniCloudAccount:(id)arg1 password:(id)arg2 features:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100042038
- (void)signOutiTunesAccount;	// IMP=0x0000000100041dcc
- (_Bool)signIniTunesAccount:(id)arg1 password:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000414d4
- (id)existingAccounts;	// IMP=0x00000001000412b0
- (_Bool)setupiTunes:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100040e94
- (_Bool)setupiCloud:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100040990
- (_Bool)configureTvUserWithiCloud:(id)arg1 iTunes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100040218
- (_Bool)trySetupAccounts:(id *)arg1;	// IMP=0x000000010003fb38
- (_Bool)setupAccounts:(id *)arg1;	// IMP=0x000000010003f7d0

@end
