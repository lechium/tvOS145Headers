/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject {

	NSString* _messageID;
	NSString* _attachmentName;

}

@property (nonatomic,copy) NSString * messageID;                   //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * attachmentName;              //@synthesize attachmentName=_attachmentName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)messageID;
-(void)setMessageID:(NSString *)arg1 ;
-(void)setAttachmentName:(NSString *)arg1 ;
-(NSString *)attachmentName;
-(id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2 ;
@end

