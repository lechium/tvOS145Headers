/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/AVCRTCPPacket.h>

@class NSString;

@interface AVCRTCPSourceDescription : AVCRTCPPacket {

	unsigned char _type;
	NSString* _text;

}

@property (assign,nonatomic) unsigned char type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * text;                 //@synthesize text=_text - In the implementation block
-(id)description;
-(void)dealloc;
-(void)setType:(unsigned char)arg1 ;
-(unsigned char)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
@end

