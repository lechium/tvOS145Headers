/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUICore/SiriUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUICVoiceSelectionViewModelLanguage : NSObject <NSCopying> {

	BOOL _isCurrentOutputLanguage;
	NSString* _localizedDisplayName;
	NSString* _languageCode;

}

@property (nonatomic,copy,readonly) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentOutputLanguage;                      //@synthesize isCurrentOutputLanguage=_isCurrentOutputLanguage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)languageCode;
-(NSString *)localizedDisplayName;
-(id)initWithLanguageCode:(id)arg1 localizedDisplayName:(id)arg2 isCurrentOutputLanguage:(BOOL)arg3 ;
-(BOOL)isCurrentOutputLanguage;
@end
