/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DataDetectorsSourceAccessProtocol
@required
-(void)fileForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)filesForSourceRead:(id)arg1 resourceType:(unsigned long long)arg2 withReply:(/*^block*/id)arg3;
-(void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(/*^block*/id)arg4;

@end
