//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WiFiAwareDataSessionIssueReport;

@protocol WiFiAwareDatapathXPC <NSObject>
- (void)generateStatisticsReportWithCompletionHandler:(void (^)(long long, WiFiAwareDataSessionStatisticsReport *))arg1;
- (void)updateLinkStatus:(long long)arg1;
- (void)reportIssue:(WiFiAwareDataSessionIssueReport *)arg1;
- (void)cancel;
@end

