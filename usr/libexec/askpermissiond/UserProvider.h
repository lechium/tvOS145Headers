//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UserProvider : NSObject
{
}

+ (id)_authenticateWithUsername:(id)arg1 authenticationType:(long long)arg2;	// IMP=0x000000010001335c
+ (id)primaryiCloudUserWithAction:(long long)arg1;	// IMP=0x0000000100012df0
+ (id)localApprovalUser;	// IMP=0x0000000100012b98
+ (void)setPreviousLocalApprovalUsername:(id)arg1;	// IMP=0x0000000100012b20
+ (id)previousLocalApprovalUsername;	// IMP=0x0000000100012abc

@end

