/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MFSearchResultHandler
@optional
-(id)filter;
-(void)handleMessage:(id)arg1;
-(void)setResultSummary:(char*)arg1;

@required
-(void)beginResult:(unsigned)arg1;
-(void)setResultSubject:(char*)arg1;
-(void)setResultSender:(char*)arg1;
-(void)setResultDateRecieved:(double)arg1;
-(void)setResultUnread:(BOOL)arg1;
-(void)endResult;

@end

