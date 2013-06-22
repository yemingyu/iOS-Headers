/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL, SAMovieV2ReviewListSnippet, SAMovieV2ShowtimeSnippet, SAMovieV2TheaterShowtimeListSnippet;

@interface SAMovieV2MovieDetailSnippet : SAUISnippet
{
}

+ (id)movieDetailSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieDetailSnippet;
@property(copy, nonatomic) NSDate *theatricalReleaseDate;
@property(copy, nonatomic) NSString *theaterShowtimeSearchRegionDescription;
@property(retain, nonatomic) SAMovieV2TheaterShowtimeListSnippet *theaterShowtimeListSnippet;
@property(copy, nonatomic) NSString *synopsis;
@property(copy, nonatomic) NSArray *studios;
@property(retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property(nonatomic) int runtimeInMinutes;
@property(copy, nonatomic) NSString *rating;
@property(copy, nonatomic) NSNumber *qualityRating;
@property(copy, nonatomic) NSArray *posterImages;
@property(copy, nonatomic) NSNumber *playTrailer;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) SAMovieV2ReviewListSnippet *movieReviewListSnippet;
@property(copy, nonatomic) NSURL *lowresTrailerUri;
@property(nonatomic) BOOL is3d;
@property(copy, nonatomic) NSURL *iTunesUri;
@property(copy, nonatomic) NSURL *hiresTrailerUri;
@property(copy, nonatomic) NSArray *genres;
@property(copy, nonatomic) NSArray *directors;
@property(copy, nonatomic) NSNumber *availableOnItunesForRent;
@property(copy, nonatomic) NSNumber *availableOnItunesForPurchase;
@property(copy, nonatomic) NSArray *actors;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

