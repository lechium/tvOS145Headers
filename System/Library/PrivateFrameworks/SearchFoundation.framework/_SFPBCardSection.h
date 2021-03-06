/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBCardSection.h>
@class _SFPBCardSectionValue, _SFPBCard, NSArray, NSString, _SFPBUserReportRequest, _SFPBCommand, NSData;


@protocol _SFPBCardSection <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBCardSectionValue * value; 
@property (nonatomic,retain) _SFPBCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) _SFPBUserReportRequest * userReportRequest; 
@property (nonatomic,retain) _SFPBCommand * command; 
@property (nonatomic,retain) _SFPBCommand * previewCommand; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(int)arg1;
-(int)type;
-(id)initWithDictionary:(id)arg1;
-(_SFPBCardSectionValue *)value;
-(void)setValue:(id)arg1;
-(void)setCommand:(id)arg1;
-(_SFPBCommand *)command;
-(id)initWithJSON:(id)arg1;
-(_SFPBCard *)nextCard;
-(NSArray *)commands;
-(void)setCommands:(id)arg1;
-(NSData *)jsonData;
-(void)setNextCard:(id)arg1;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(id)arg1;
-(NSString *)cardSectionId;
-(void)setCardSectionId:(id)arg1;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(id)arg1;
-(_SFPBUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(id)arg1;
-(_SFPBCommand *)previewCommand;
-(void)setPreviewCommand:(id)arg1;
-(void)addCommands:(id)arg1;
-(void)addParameterKeyPaths:(id)arg1;
-(void)clearCommands;
-(unsigned long long)commandsCount;
-(id)commandsAtIndex:(unsigned long long)arg1;
-(void)clearParameterKeyPaths;
-(unsigned long long)parameterKeyPathsCount;
-(id)parameterKeyPathsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBCardSectionValue, _SFPBCard, NSArray, NSString, _SFPBUserReportRequest, _SFPBCommand, NSData;

@interface _SFPBCardSection : PBCodable <_SFPBCardSection, NSSecureCoding> {

	int _type;
	_SFPBCardSectionValue* _value;
	_SFPBCard* _nextCard;
	NSArray* _commands;
	NSArray* _parameterKeyPaths;
	NSString* _cardSectionId;
	NSString* _resultIdentifier;
	_SFPBUserReportRequest* _userReportRequest;
	_SFPBCommand* _command;
	_SFPBCommand* _previewCommand;

}

@property (assign,nonatomic) int type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBCardSectionValue * value;                           //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) _SFPBCard * nextCard;                                    //@synthesize nextCard=_nextCard - In the implementation block
@property (nonatomic,copy) NSArray * commands;                                        //@synthesize commands=_commands - In the implementation block
@property (nonatomic,copy) NSArray * parameterKeyPaths;                               //@synthesize parameterKeyPaths=_parameterKeyPaths - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                                  //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultIdentifier;                               //@synthesize resultIdentifier=_resultIdentifier - In the implementation block
@property (nonatomic,retain) _SFPBUserReportRequest * userReportRequest;              //@synthesize userReportRequest=_userReportRequest - In the implementation block
@property (nonatomic,retain) _SFPBCommand * command;                                  //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) _SFPBCommand * previewCommand;                           //@synthesize previewCommand=_previewCommand - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBCardSectionValue *)value;
-(void)setValue:(_SFPBCardSectionValue *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCommand:(_SFPBCommand *)arg1 ;
-(_SFPBCommand *)command;
-(id)initWithJSON:(id)arg1 ;
-(_SFPBCard *)nextCard;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(void)setNextCard:(_SFPBCard *)arg1 ;
-(NSArray *)parameterKeyPaths;
-(void)setParameterKeyPaths:(NSArray *)arg1 ;
-(NSString *)cardSectionId;
-(void)setCardSectionId:(NSString *)arg1 ;
-(NSString *)resultIdentifier;
-(void)setResultIdentifier:(NSString *)arg1 ;
-(_SFPBUserReportRequest *)userReportRequest;
-(void)setUserReportRequest:(_SFPBUserReportRequest *)arg1 ;
-(_SFPBCommand *)previewCommand;
-(void)setPreviewCommand:(_SFPBCommand *)arg1 ;
-(id)initWithSFCardSection:(id)arg1 ;
-(void)addCommands:(id)arg1 ;
-(void)addParameterKeyPaths:(id)arg1 ;
-(void)clearCommands;
-(unsigned long long)commandsCount;
-(id)commandsAtIndex:(unsigned long long)arg1 ;
-(void)clearParameterKeyPaths;
-(unsigned long long)parameterKeyPathsCount;
-(id)parameterKeyPathsAtIndex:(unsigned long long)arg1 ;
@end

