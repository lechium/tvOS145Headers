//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface RPEventRegistration : NSObject
{
    NSString *_eventID;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010003e584
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;

@end

