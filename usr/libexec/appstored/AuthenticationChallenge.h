//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLAuthenticationChallenge;

@interface AuthenticationChallenge : NSObject
{
    NSURLAuthenticationChallenge *_challenge;	// 8 = 0x8
    NSString *_localizedMessage;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
    NSString *_user;	// 32 = 0x20
}

+ (id)_titleForProtectionSpace:(id)arg1;	// IMP=0x00000001001c7a60
+ (id)_messageForProtectionSpace:(id)arg1;	// IMP=0x00000001001c77a4
- (void).cxx_destruct;	// IMP=0x00000001001c7b50
@property(retain, nonatomic) NSString *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(retain, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
- (id)initWithAuthenticationChallenge:(id)arg1;	// IMP=0x00000001001c7664

@end

