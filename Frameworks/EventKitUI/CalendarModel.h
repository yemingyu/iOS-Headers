/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CalendarEventLoaderDelegate-Protocol.h"

@class CalendarEventLoader, EKCalendarDate, EKEvent, EKEventStore, NSArray, NSCalendar, NSLock, NSSet, NSString, _EKNotificationMonitor;

@interface CalendarModel : NSObject <CalendarEventLoaderDelegate>
{
    EKEventStore *_eventStore;
    CalendarEventLoader *_eventLoader;
    NSLock *_filterLock;
    NSArray *_visibleCalendars;
    int _readWriteCalendarCount;
    int _invitationBearingStoresExist;
    _EKNotificationMonitor *_notificationMonitor;
    id <OccurrenceCacheDataSourceProtocol> _occurrenceCacheDataSource;
    int _cachedFakeTodayIndex;
    NSSet *_selectedCalendars;
    NSString *_searchString;
    NSCalendar *_calendar;
    EKCalendarDate *_selectedDate;
    unsigned int _firstVisibleSecond;
    EKEvent *_selectedOccurrence;
}

@property(retain, nonatomic) EKEvent *selectedOccurrence; // @synthesize selectedOccurrence=_selectedOccurrence;
@property(nonatomic) unsigned int firstVisibleSecond; // @synthesize firstVisibleSecond=_firstVisibleSecond;
@property(copy, nonatomic) EKCalendarDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
- (void).cxx_destruct;
- (BOOL)searchingOccurrences;
- (id)recentNotifications;
- (id)allNotifications;
- (unsigned int)allNotificationsCount;
- (void)_notificationCountExpired:(id)arg1;
- (void)_notificationsExpired:(id)arg1;
- (BOOL)invitationBearingStoresExistForEvents;
- (id)_notificationMonitor;
- (void)_systemWake;
- (void)_timeZoneChanged:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (void)prepareForAppSuspend;
- (void)updateAfterAppResume;
- (void)_occurrenceCacheChanged;
- (void)_eventStoreChanged:(id)arg1;
- (void)calendarEventLoader:(id)arg1 occurrencesDidUpdateBetweenStart:(double)arg2 end:(double)arg3;
- (void)_processReloadForCacheOnly:(BOOL)arg1 includingCalendars:(BOOL)arg2 checkCalendarsValid:(BOOL)arg3;
- (void)_invalidateCachedOccurrences;
- (void)_searchFoundDateToScrollTo:(id)arg1;
- (void)_searchResultsAvailable:(id)arg1;
- (void)fetchCachedDaysInBackgroundStartingFromSection:(int)arg1;
- (int)cachedFakeTodayIndex;
- (int)sectionForCachedOccurrencesOnDate:(id)arg1;
- (int)sectionForCachedOccurrencesOnDate:(id)arg1 sectionExistsForDay:(char *)arg2;
- (id)cachedOccurrenceAtIndexPath:(id)arg1;
- (id)dateForCachedOccurrencesInSection:(int)arg1;
- (int)numberOfCachedOccurrencesInSection:(int)arg1;
- (int)numberOfDaysWithCachedOccurrences;
- (BOOL)cachedOccurrencesAreLoaded;
- (BOOL)cachedOccurrencesAreBeingGenerated;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setComponentForExpandingPadding:(unsigned int)arg1;
- (void)setComponentForExpandingRequests:(unsigned int)arg1;
- (void)setMaxCachedDays:(unsigned int)arg1;
- (void)setDesiredPaddingDays:(unsigned int)arg1;
- (id)closestOccurrenceToTomorrowForEventUID:(int)arg1;
- (double)_tomorrow;
- (id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(char *)arg2;
- (id)occurrencesForDay:(id)arg1 waitForLoad:(BOOL)arg2;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4;
- (id)occurrencesForStartDay:(id)arg1 endDay:(id)arg2 preSorted:(BOOL)arg3 waitForLoad:(BOOL)arg4;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
@property(readonly, nonatomic) EKCalendarDate *selectedDay;
- (void)refreshCalendarDataIfNeeded:(BOOL)arg1;
- (void)refreshAccountListIfNeeded:(BOOL)arg1;
- (id)defaultCalendarForNewEvents;
- (BOOL)isCalendarVisibleWithID:(id)arg1;
- (void)ensureCalendarVisibleWithId:(id)arg1;
@property(readonly, nonatomic) int readWriteCalendarCount;
@property(readonly, nonatomic) int visibleCalendarCount;
- (BOOL)selectedOccurrenceIsSearchMatch;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSSet *selectedCalendars; // @synthesize selectedCalendars=_selectedCalendars;
- (void)dealloc;
- (id)init;

@end

