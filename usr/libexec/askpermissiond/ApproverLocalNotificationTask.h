//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class Request;

@interface ApproverLocalNotificationTask : AMSTask
{
    Request *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000174c
@property(readonly, nonatomic) Request *request; // @synthesize request=_request;
- (id)perform;	// IMP=0x00000001000014e0
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000100001460

@end

