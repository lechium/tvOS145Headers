//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@protocol SAAceCommand;

@interface ADAcePassthroughSiriResponse : AFSiriResponse
{
    id <SAAceCommand> _replyCommand;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000f8b38
- (void).cxx_destruct;	// IMP=0x00000001000f8c74
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000f8bc8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000f8b40
- (id)replyCommand;	// IMP=0x00000001000f8b28
- (id)initWithRequest:(id)arg1 replyCommand:(id)arg2;	// IMP=0x00000001000f8aa0

@end

