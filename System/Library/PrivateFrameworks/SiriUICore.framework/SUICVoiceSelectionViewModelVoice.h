/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUICore/SiriUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AFVoiceInfo, NSString;

@interface SUICVoiceSelectionViewModelVoice : NSObject <NSCopying> {

	BOOL _isCurrentSiriVoice;
	AFVoiceInfo* _voiceInfo;

}

@property (nonatomic,copy,readonly) AFVoiceInfo * voiceInfo;                      //@synthesize voiceInfo=_voiceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) CGColorRef associatedCGColor; 
@property (nonatomic,readonly) BOOL isCurrentSiriVoice;                           //@synthesize isCurrentSiriVoice=_isCurrentSiriVoice - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDisplayName;
-(AFVoiceInfo *)voiceInfo;
-(id)initWithVoice:(id)arg1 isCurrentSiriVoice:(BOOL)arg2 ;
-(CGColorRef)associatedCGColor;
-(BOOL)isCurrentSiriVoice;
@end

