//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SHMatcherRequest;
@protocol SHMatcherDelegate;

@protocol SHMatcher <NSObject>
@property(nonatomic) __weak id <SHMatcherDelegate> delegate;
- (void)startRecognitionForRequest:(SHMatcherRequest *)arg1;

@optional
- (oneway void)stop;
@end

