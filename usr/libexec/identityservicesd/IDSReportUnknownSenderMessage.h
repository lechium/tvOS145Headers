//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTIDSMessage.h>

@class NSString;

@interface IDSReportUnknownSenderMessage : FTIDSMessage
{
    _Bool _isBlackholed;	// 232 = 0xe8
    int _messageServerTimestamp;	// 236 = 0xec
    NSString *_unknownSenderURI;	// 240 = 0xf0
    NSString *_messageID;	// 248 = 0xf8
    NSString *_responseMessage;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000001005b9a3c
@property(copy) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property int messageServerTimestamp; // @synthesize messageServerTimestamp=_messageServerTimestamp;
@property _Bool isBlackholed; // @synthesize isBlackholed=_isBlackholed;
@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSString *unknownSenderURI; // @synthesize unknownSenderURI=_unknownSenderURI;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00000001005b95fc
- (id)messageBody;	// IMP=0x00000001005b9370
- (id)requiredKeys;	// IMP=0x00000001005b92bc
- (id)bagKey;	// IMP=0x00000001005b92a0
- (double)anisetteHeadersTimeout;	// IMP=0x00000001005b9288
- (_Bool)wantsManagedRetries;	// IMP=0x00000001005b926c
- (_Bool)wantsBodySignature;	// IMP=0x00000001005b9250
- (int)maxTimeoutRetries;	// IMP=0x00000001005b9238
- (_Bool)wantsExtraTimeoutRetry;	// IMP=0x00000001005b921c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001005b9048
- (id)init;	// IMP=0x00000001005b8f8c

@end

