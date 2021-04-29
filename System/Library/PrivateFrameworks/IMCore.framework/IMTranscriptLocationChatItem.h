/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMMessagePartChatItem.h>

@class IMMapURLLocationInfo;

@interface IMTranscriptLocationChatItem : IMMessagePartChatItem {

	IMMapURLLocationInfo* _locationInfo;

}

@property (nonatomic,retain) IMMapURLLocationInfo * locationInfo;              //@synthesize locationInfo=_locationInfo - In the implementation block
-(IMMapURLLocationInfo *)locationInfo;
-(void)setLocationInfo:(IMMapURLLocationInfo *)arg1 ;
@end
