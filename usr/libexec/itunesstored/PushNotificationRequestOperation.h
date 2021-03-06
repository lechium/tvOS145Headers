//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSURLConnectionResponse, SSVPushNotificationParameters;

@interface PushNotificationRequestOperation : ISOperation
{
    SSVPushNotificationParameters *_parameters;	// 96 = 0x60
    SSURLConnectionResponse *_response;	// 104 = 0x68
    NSString *_userAgent;	// 112 = 0x70
}

- (_Bool)_loadResponseWithAccountIdentifier:(id)arg1 URL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100087a70
- (void)run;	// IMP=0x0000000100087294
@property(copy) NSString *userAgent;
@property(readonly) SSURLConnectionResponse *URLResponse;
- (void)dealloc;	// IMP=0x0000000100087118
- (id)initWithPushNotificationParameters:(id)arg1;	// IMP=0x00000001000870b0

@end

