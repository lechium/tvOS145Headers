/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMAP/IMAP-Structs.h>
@class NSMutableArray;

@interface MFIMAPDownloadCache : NSObject {

	NSMutableArray* _downloads;

}
-(void)dealloc;
-(id)downloadForMessage:(id)arg1 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 length:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 expectedLength:(unsigned long long)arg3 consumer:(id)arg4 ;
-(id)downloadForUid:(unsigned)arg1 section:(id)arg2 range:(NSRange)arg3 consumer:(id)arg4 ;
-(void)handleFetchResponse:(id)arg1 forUid:(unsigned)arg2 ;
-(void)handleFetchResponses:(id)arg1 ;
-(void)processResultsForUid:(unsigned)arg1 ;
-(void)cleanUpDownloadsForUid:(unsigned)arg1 ;
-(void)addCommandsForDownload:(id)arg1 toPipeline:(id)arg2 ;
@end

