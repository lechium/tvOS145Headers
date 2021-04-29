/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BrailleTranslation/BRLTTranslationService.h>

@class BRLTSLoopbackTranslationService;

@interface BRLTLoopbackTranslationService : BRLTTranslationService {

	BRLTSLoopbackTranslationService* _loopbackService;

}

@property (nonatomic,retain) BRLTSLoopbackTranslationService * loopbackService;              //@synthesize loopbackService=_loopbackService - In the implementation block
-(BOOL)isLoopback;
-(id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2 loopbackService:(id)arg3 ;
-(BRLTSLoopbackTranslationService *)loopbackService;
-(void)setLoopbackService:(BRLTSLoopbackTranslationService *)arg1 ;
@end

