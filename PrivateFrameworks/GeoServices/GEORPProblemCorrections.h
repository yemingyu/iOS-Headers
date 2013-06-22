/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, GEORPCorrectedSearch, GEORPMapLocation, NSMutableArray, NSString;

@interface GEORPProblemCorrections : PBCodable
{
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
}

@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) GEORPMapLocation *correctedMapLocation; // @synthesize correctedMapLocation=_correctedMapLocation;
@property(retain, nonatomic) GEORPCorrectedSearch *correctedSearch; // @synthesize correctedSearch=_correctedSearch;
@property(retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
@property(retain, nonatomic) GEORPCorrectedLabel *correctedLabel; // @synthesize correctedLabel=_correctedLabel;
@property(retain, nonatomic) NSMutableArray *correctedFields; // @synthesize correctedFields=_correctedFields;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasComments;
@property(readonly, nonatomic) BOOL hasCorrectedMapLocation;
@property(readonly, nonatomic) BOOL hasCorrectedSearch;
@property(readonly, nonatomic) BOOL hasCorrectedCoordinate;
@property(readonly, nonatomic) BOOL hasCorrectedLabel;
- (id)correctedFieldsAtIndex:(unsigned int)arg1;
- (unsigned int)correctedFieldsCount;
- (void)addCorrectedFields:(id)arg1;
- (void)clearCorrectedFields;
- (void)dealloc;

@end

