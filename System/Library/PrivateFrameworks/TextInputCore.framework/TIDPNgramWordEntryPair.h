/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, TIWordEntryAligned;

@interface TIDPNgramWordEntryPair : NSObject {

	NSString* _wordString;
	TIWordEntryAligned* _wordEntryAligned;

}

@property (nonatomic,retain) NSString * wordString;                                          //@synthesize wordString=_wordString - In the implementation block
@property (nonatomic,retain) TIWordEntryAligned * wordEntryAligned;                          //@synthesize wordEntryAligned=_wordEntryAligned - In the implementation block
@property (getter=isStandaloneString,nonatomic,readonly) BOOL standaloneString; 
-(id)initWithWordString:(id)arg1 wordEntryAligned:(id)arg2 ;
-(id)initWithWordString:(id)arg1 ;
-(BOOL)isStandaloneString;
-(NSString *)wordString;
-(void)setWordString:(NSString *)arg1 ;
-(TIWordEntryAligned *)wordEntryAligned;
-(void)setWordEntryAligned:(TIWordEntryAligned *)arg1 ;
@end

