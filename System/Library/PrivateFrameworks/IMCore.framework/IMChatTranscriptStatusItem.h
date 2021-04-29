/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate;


@protocol IMChatTranscriptStatusItem <IMChatTranscriptItem>
@property (nonatomic,readonly) long long statusType; 
@property (nonatomic,readonly) long long expireStatusType; 
@property (nonatomic,readonly) NSDate * dateOfStatus; 
@required
-(long long)statusType;
-(long long)expireStatusType;
-(NSDate *)dateOfStatus;

@end
