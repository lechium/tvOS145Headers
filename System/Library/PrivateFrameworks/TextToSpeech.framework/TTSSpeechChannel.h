/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject <NSSecureCoding> {

	TTSSpeechVoice* _voice;

}

@property (nonatomic,retain) TTSSpeechVoice * voice;              //@synthesize voice=_voice - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TTSSpeechVoice *)voice;
-(void)setVoice:(TTSSpeechVoice *)arg1 ;
-(id)initWithVoice:(id)arg1 ;
@end

